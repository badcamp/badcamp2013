<div id="<?php print $block_html_id; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>

  <?php if ($block->subject): ?>
  <?php /* Extra span added here for theming full-width headlines. */ ?>
  <h2<?php print $title_attributes; ?>><span><?php print $block->subject ?><span></span></h2>
  <?php endif;?>

  <?php /* Content div is needed here for footer content layout. */ ?>
  <div class="content"<?php print $content_attributes; ?>>
    <?php print render($title_prefix); ?>
    <?php print render($title_suffix); ?>
    <?php print $content ?>
  </div>
</div>
