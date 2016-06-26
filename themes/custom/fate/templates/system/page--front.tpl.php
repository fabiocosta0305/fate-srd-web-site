

<?php if ($page['header']): ?>
  <?php print render($page['header']); ?>
<?php endif; ?>

<?php if ($page['main_prefix']): ?>
  <?php print render($page['main_prefix']); ?>
<?php endif; ?>

<?php if ($page['content']): ?>
  <main id="main" role="main" class="content-wrapper">
    <article class="main-content">

      <div class="rules">
        <div class="rules-item">
          <h2 class="rules__title">Fate Core</h2>
          <p><strong>Fate Core is a dynamic and flexible roleplaying game</strong> built around <strong>proactive characters</strong> that you play. Fate Core does not have a default setting&nbsp;to&nbsp;encourage&nbsp;all styles of play.</p>
          <a href="/fate-core/basics" class="rules__button">Read more...</a>
        </div>

        <div class="rules-item">
          <h2 class="rules__title">Fate Accelerated</h2>
          <p><strong><abbr title="Fate Accelerated">FAE</abbr> is a grab-n-go version of Fate</strong>, written for <strong>easy prep and easy play</strong>. Don't let that simplicity fool you, use these rules to run any style and any length campaign.</p>
          <a href="/fate-accelerated/get-started" class="rules__button">Read more...</a>
        </div>

        <div class="rules-item">
          <h2 class="rules__title">Fate System Toolkit</h2>
          <p>This toolkit is <strong>includes many ideas</strong> that can be used wholesale or as inspiration for your own games.</p>
          <a href="/fate-system-toolkit/introduction" class="rules__button">Read more...</a>
        </div>

        <div class="rules-item">
          <h2 class="rules__title">Atomic Robo</h2>
          <p>This toolkit is <strong>includes many ideas</strong> that can be used wholesale or as inspiration for your own games.</p>
          <a href="/fate-system-toolkit/introduction" class="rules__button">Read more...</a>
        </div>

      </div>

<!--      FATE CORE-->
<!--      FATE ACCELERATED-->
<!--      FATE SYSTEM TOOLKIT-->
<!--      ATOMIC ROBO-->
<!--      FRONTIER SPIRIT-->
<!--      GODS AND MONSTERS-->
<!--      SAILS FULL OF STARS-->
<!--      THREE ROCKETEERS-->
<!--      VENTURE CITY-->

      <h2 class="fate-products-title">Fate Products</h2>
      <p>Search for Fate books, adventures, and more. If you notice something missing <a href="/contact-us">let us know</a>.</p>
      <?php //print views_embed_view('products', 'page'); ?>
    </article>

    <aside class="sidebar" id="sidebar">
      <?php print $navMenu; ?>
      <?php print render($page['sidebar']); ?>
    </aside>
  </main>
<?php endif; ?>



<?php if ($page['footer']): ?>
  <footer id="footer" role="contentinfo" class="footer">
    <div class="footer-content">
      <?php print render($page['footer']); ?>
    </div>
  </footer>
<?php endif; ?>

