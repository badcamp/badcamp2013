<?php
/**
 * @file
 * Template for a 3 column panel layout.
 *
 * This template provides a four column panel display layout, with
 * each column roughly equal in width.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['first_column']: Content in the first column.
 *   - $content['second_column']: Content in the second column.
 *   - $content['third_column']: Content in the third column.
 */
?>
<div class="panel-display badcamp-3col clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-panel panel-col-first">
    <div class="inside"><?php print $content['first_column']; ?></div>
  </div>

  <div class="panel-panel panel-col-second">
    <div class="inside"><?php print $content['second_column']; ?></div>
  </div>

  <div class="panel-panel panel-col-third">
    <div class="inside"><?php print $content['third_column']; ?></div>
  </div>

</div>
