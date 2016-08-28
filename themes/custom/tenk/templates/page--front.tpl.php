<?php if ($page['header']): ?>
  <?php print render($page['header']); ?>
<?php endif; ?>

<?php if ($page['main_prefix']): ?>
  <?php print render($page['main_prefix']); ?>
<?php endif; ?>

<?php if ($page['content']): ?>
<main>
  <article>
    <h1>Fate Roleplaying Game SRD</h1>
    <h2>Fate Roleplaying Game Resources At Your Fingertips</h2>
    <p>The purpose of this site is to be a friendly, searchable, bookmarkable home for the Fate Roleplaying Game System
      Reference Document (SRD). For more information about the site, <a href="/about-site">see the about page</a>.</p>

    <div class="list-of-rules">

      <section>
        <h2>Fate Core</h2>
        <p><strong>Fate Core is a dynamic and flexible roleplaying game</strong> built around <strong>proactive
            characters</strong> that you play. Fate Core does not have a default setting&nbsp;to&nbsp;encourage&nbsp;all
          styles of play.</p>
        <a href="/fate-core">Read more...</a>
      </section>

      <section>
        <h2>Fate Accelerated</h2>
        <p><strong><abbr title="Fate Accelerated">FAE</abbr> is a grab-n-go version of Fate</strong>, written for
          <strong>easy prep and easy play</strong>. Don't let that simplicity fool you, use these rules to run any style
          and any length campaign.</p>
        <a href="/fate-accelerated">Read more...</a>
      </section>

      <section>
        <h2>Fate System Toolkit</h2>
        <p>This toolkit is <strong>includes many ideas</strong> that can be used wholesale or as inspiration for your
          own games.</p>
        <a href="/fate-system-toolkit">Read more...</a>
      </section>

      <section>
        <h2>Atomic Robo</h2>
        <p><strong>Action! Science! Robots! Punching! More Science!</strong> Are you ready for some two-fisted science
          adventure?</p>
        <a href="/atomic-robo">Read more...</a>
      </section>

      <section>
        <h2>Frontier Spirit</h2>
        <p><strong>Natural disasters, storms, subsistence, and even basic survival</strong> on an alien spirit world
          unused to coexisting with sentient creatures</p>
        <a href="/frontier-spirit">Read more...</a>
      </section>

      <section>
        <h2>Gods &amp; Monsters</h2>
        <p>The world is young and majestic, and humans eke out a living and dream of civilization. <strong>But you are
            not like them: you are a god (or a monster).</strong></p>
        <a href="/gods-monsters">Read more...</a>
      </section>

      <section>
        <h2>Sails Full of Stars</h2>
        <p><strong>Track down pirates, brave the stars, and mount shipboard battles!</strong></p>
        <a href="/sails-full-stars">Read more...</a>
      </section>

      <section>
        <h2>Three Rocketeers</h2>
        <p><strong>All for one and one for all!</strong> No skill swashbuckling and conspiracies.</p>
        <a href="/three-rocketeers">Read more...</a>
      </section>

      <section>
        <h2>Venture City</h2>
        <p><strong>A world of superpowers, villainous corporations, and ruthless gangs</strong>, set in a near-future
          where powers are for sale.</p>
        <a href="/venture-city">Read more...</a>
      </section>

      <section>
        <h2>Discover More Fate books and products</h2>
        <a href="/products">Find more Fate...</a>
      </section>

    </div>

  </article>

  <aside>
    <!--      --><?php //print $navMenu; ?>
    <?php print render($page['sidebar']); ?>
  </aside>
  <?php endif; ?>
</main>


<?php if ($page['footer']): ?>
  <footer>
    <?php print render($page['footer']); ?>
  </footer>
<?php endif; ?>

