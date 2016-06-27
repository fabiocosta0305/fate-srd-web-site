

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
          <p><strong>Action! Science! Robots! Punching! More Science!</strong> Are you ready for some two-fisted science adventure?</p>
          <a href="/atomic-robo/custom-skills" class="rules__button">Read more...</a>
        </div>

        <div class="rules-item">
          <h2 class="rules__title">Frontier Spirit</h2>
          <p><strong>Natural disasters, storms, subsistence, and even basic survival</strong> on an alien spirit world unused to coexisting with sentient creatures</p>
          <a href="/frontier-spirit/skills" class="rules__button">Read more...</a>
        </div>

        <div class="rules-item">
          <h2 class="rules__title">Gods &amp; Monsters</h2>
          <p>The world is young and majestic, and humans eke out a living and dream of civilization. <strong>But you are not like them: you are a god (or a monster).</strong></p>
          <a href="/gods-and-monsters/creating-world" class="rules__button">Read more...</a>
        </div>

        <div class="rules-item">
          <h2 class="rules__title">Sails Full of Stars</h2>
          <p><strong>Track down pirates, brave the stars, and mount shipboard battles!</strong></p>
          <a href="/sails-full-stars/new-skills-and-stunts" class="rules__button">Read more...</a>
        </div>

        <div class="rules-item">
          <h2 class="rules__title">Three Rocketeers</h2>
          <p><strong>All for one and one for all!</strong> No skill swashbuckling and conspiracies.</p>
          <a href="/three-rocketeers/no-skill-swashbuckling" class="rules__button">Read more...</a>
        </div>

        <div class="rules-item">
          <h2 class="rules__title">Venture City</h2>
          <p><strong>A world of superpowers, villainous corporations, and ruthless gangs</strong>, set in a near-future where powers are for sale.</p>
          <a href="/venture-city/making-your-character-and-powers" class="rules__button">Read more...</a>
        </div>

      </div>

      <h2>Fate Products</h2>
      <?php print views_embed_view('products', 'page'); ?>

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

