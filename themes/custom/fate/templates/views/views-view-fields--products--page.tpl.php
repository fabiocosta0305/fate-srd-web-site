<?php
$created = $row->node_created;
$current_date = time();
$difference = ($current_date - $created)/86400; //86400 seconds in a day
if ($difference <= 14) {
  $new = "<span class=\"new\">NEW</span>";
}
$title = $row->node_title;
if (isset($row->_field_data['nid']['entity']->field_link['und'][0]['url'])) {
  $url = $row->_field_data['nid']['entity']->field_link['und'][0]['url'];
}

$tid = $row->_field_data['nid']['entity']->field_publisher['und'][0]['tid'];
$term = taxonomy_term_load($tid);
$publisher = $term->name;
?>

<?php if (isset($new)) { print $new; } ?>
<a href="<?php if (isset($url)) { print $url; } ?>"><?php print $title; ?></a>
by <em> <?php print $publisher; ?></em>
