<?php
$born_on_date = $row->node_created;
$current_date = time();
$difference = ($current_date - $born_on_date)/86400; //86400 seconds in a day

if ($difference <= 14) {
  print "<span class=\"new\">NEW</span>";
}
