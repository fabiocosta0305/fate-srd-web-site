<?php

/**
 * @file
 * A sample panel layout template, to see how to build your own.
 */
?>

<section class="content-wrapper">

  <section class="main-content">
    <?php print $content['main-content']; ?>
  </section>

  <aside class="sidebar">

    <section class="nav-menu">
      <?php print $content['menu']; ?>
    </section>

    <section class="sidebar-content">
      <?php print $content['sidebar']; ?>
    </section>

  </aside>

</section>
