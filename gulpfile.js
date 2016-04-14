(function () {

  'use strict';

  var gulp        = require('gulp');
  var eslint      = require('gulp-eslint');
  var minifyCSS   = require('gulp-minify-css');
  var prefix      = require('gulp-autoprefixer');
  var concat      = require('gulp-concat');
  var uglify      = require('gulp-uglify');
  var stripDebug  = require('gulp-strip-debug');
  var rename      = require('gulp-rename');
  var browserSync = require('browser-sync');

  var themeDir = 'themes/custom/fate';

  var theme = {
    'css': themeDir + '/css',
    'fonts': themeDir + '/fonts',
    'img': themeDir + '/img',
    'scss': themeDir + '/sss',
    'js_src': themeDir + '/js_src'
  };


//////////////////////////////
// Begin Gulp Tasks
//////////////////////////////
  gulp.task('lint', function () {
    // ESLint ignores files with "node_modules" paths.
    // So, it's best to have gulp ignore the directory as well.
    // Also, Be sure to return the stream from the task;
    // Otherwise, the task may end before the stream has finished.
    return gulp.src(['themes/custom/fate/js_src/**/*.js','!node_modules/**'])
      // eslint() attaches the lint output to the "eslint" property
      // of the file object so it can be used by other modules.
      .pipe(eslint())
      // eslint.format() outputs the lint results to the console.
      // Alternatively use eslint.formatEach() (see Docs).
      .pipe(eslint.format())
      // To have the process exit with an error code (1) on
      // lint error, return the stream and pipe to failAfterError last.
      .pipe(eslint.failAfterError());
  });


  // gulp.task('eslint', 'Check JavaScript files for coding standards issues.', function () {
  //
  //   var excludePatterns = [
  //         '!.aquifer/**/*',
  //         '!build/**/*',
  //         '!files/**/*',
  //         '!node_modules/**/*',
  //         '!vendor/**/*',
  //         '!' + themeDir + '/bower_components'
  //       ],
  //       sourcePatterns  = [
  //         theme.js_src + '*.js',
  //         theme.js_src + '**/*.js'
  //       ],
  //       patterns        = [];
  //
  //   // Merge sourcePatterns with excludePatterns.
  //   patterns = sourcePatterns.concat(excludePatterns);
  //
  //   return gulp.src(patterns)
  //     .pipe(eslint())
  //     .pipe(eslint.format())
  //     .pipe(eslint.failOnError());
  // }, {
  //   options: {
  //     'path': 'The path in which to check coding standards.'
  //   }
  // });
//
//   gulp.task('scripts', function () {
//       return gulp.src(sourceJs + '/**/*.js')
//         // Concatenate everything within the JavaScript folder.
//         .pipe(concat('scripts.js'))
//         .pipe(gulp.dest(paths.js))
//         .pipe(rename('scripts.min.js'))
//         // Strip all debugger code out.
//         .pipe(stripDebug())
//         // Minify the JavaScript.
//         .pipe(uglify())
//         .pipe(gulp.dest(paths.js));
//     }
//   );
//
// //////////////////////////////
// // Compass Task
// //////////////////////////////
//   gulp.task('compass', function () {
//       return gulp.src(paths.sass + '/**/*.scss')
//         .pipe(compass({
//             config_file : './config.rb',
//             css         : paths.css,
//             sass        : paths.sass,
//             bundle_exec : true,
//             time        : true
//           }
//           )
//         )
//         .pipe(prefix(["last 1 version", "> 1%", "ie 8"]))
//         .pipe(minifyCSS())
//         .pipe(gulp.dest(paths.css));
//     }
//   );
//
// //////////////////////////////
// // Watch
// //////////////////////////////
//   gulp.task('watch', function () {
//       gulp.watch(paths.js + '/**/*.js', ['lint', 'scripts']);
//       gulp.watch(paths.sass + '/**/*.scss', ['compass']);
//     }
//   );
//
// //////////////////////////////
// // BrowserSync Task
// //////////////////////////////
//   gulp.task('browserSync', function () {
//       browserSync.init([
//           paths.css + '/**/*.css',
//           paths.js + '/**/*.js',
//           paths.img + '/**/*',
//           paths.fonts + '/**/*',
//         ]
//       );
//     }
//   );
//
// //////////////////////////////
// // Server Tasks
// //////////////////////////////
//   gulp.task('default', ['scripts', 'watch', 'compass', 'browserSync']);

})();
