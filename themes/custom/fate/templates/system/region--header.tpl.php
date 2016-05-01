<header class="header">
  <h1 id="site-name" class="site-name">
    <?php print l(t('<span class="long-title">Fate Roleplaying Game <attr title="System Reference Document">SRD</attr></span>'), '', array('html'=> 'true')); ?>
    <?php print l(t('<span class="short-title">Fate <attr title="Roleplaying Game">RPG</attr> <attr title="System Reference Document">SRD</attr></span>'), '', array('html'=> 'true')); ?>
  </h1>
  <?php if ($content): ?>
    <?php print $content; ?>
  <?php endif; ?>
</header>
