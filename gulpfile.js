'use strict';

(function () {

  var gulp        = require('gulp');
  var eslint      = require('gulp-eslint');
  var minifyCSS   = require('gulp-minify-css');
  var prefix      = require('gulp-autoprefixer');
  var concat      = require('gulp-concat');
  var uglify      = require('gulp-uglify');
  var stripDebug  = require('gulp-strip-debug');
  var rename      = require('gulp-rename');
  var browserSync = require('browser-sync');
  var sass        = require('gulp-sass');
  var sassLint    = require('gulp-sass-lint');
  var sourcemaps  = require('gulp-sourcemaps');
  var browserSync = require('browser-sync').create();
  var watch       = require('gulp-watch');
  var modernizr   = require('gulp-modernizr');

  var themeDir = 'themes/custom/fate';

  var theme = {
    'css': themeDir + '/css',
    'fonts': themeDir + '/fonts',
    'img': themeDir + '/img',
    'sass': themeDir + '/sass',
    'js_src': themeDir + '/js_src',
    'js': themeDir + '/js'
  };

  gulp.task('browser-sync', function (){
    browserSync.init({
      proxy: 'http://build.fate-update.ar.dev'
    });
    gulp.watch(theme.sass + '/**/*.scss', ['styles']).on('change', browserSync.reload);
    gulp.watch(theme.js_src + '/**/*.js', ['scripts']).on('change', browserSync.reload);
  });

  gulp.task('modernizr', function () {
    gulp.src(theme.sass + '/**/*.scss')
      .pipe(modernizr('modernizr-custom.js', {
        options: [
          'setClasses',
          'addTest',
          'html5printshiv',
          'testProp',
          'fnBind'
        ]
      }))
      .pipe(uglify())
      .pipe(gulp.dest(theme.js));
  });

  gulp.task('styles', function () {
    return gulp.src(theme.sass + '/**/*.scss')
      .pipe(sassLint())
      .pipe(sassLint.format())
      .pipe(sassLint.failOnError())
      .pipe(sourcemaps.init())
        .pipe(sass().on('error', sass.logError))
        .pipe(prefix(['last 1 version', '> 1%', 'ie 8']))
        .pipe(minifyCSS())
      .pipe(sourcemaps.write('/'))
      .pipe(gulp.dest(theme.css));
  });

  gulp.task('scripts', function () {
    return gulp.src(theme.js_src + '/**/*.js')
      .pipe(concat('scripts.js'))
      .pipe(gulp.dest(theme.js))
      .pipe(rename('scripts.min.js'))
      .pipe(stripDebug())
      .pipe(uglify())
      .pipe(gulp.dest(theme.js));
  });


})();
