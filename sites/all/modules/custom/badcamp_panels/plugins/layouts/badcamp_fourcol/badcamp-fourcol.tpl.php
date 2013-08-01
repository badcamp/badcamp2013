<?php
/**
 * @file
 * Template for a 4 column panel layout.
 *
 * This template provides a four column panel display layout, with
 * each column roughly equal in width.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['left_outside']: Content in the left column.
 *   - $content['left_inside']: Content in the left column.
 *   - $content['right_inside']: Content in the right column.
 *   - $content['right_outside']: Content in the right column.
 */
?>
<div class="panel-display badcamp-4col clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-panel panel-col-first">
    <div class="inside"><?php print $content['left_outside']; ?></div>
  </div>

    <div class="panel-panel panel-col-second">
        <div class="inside"><?php print $content['left_inside']; ?></div>
    </div>

    <div class="panel-panel panel-col-third">
        <div class="inside"><?php print $content['right_inside']; ?></div>
    </div>

  <div class="panel-panel panel-col-last">
    <div class="inside"><?php print $content['right_outside']; ?></div>
  </div>
</div>
