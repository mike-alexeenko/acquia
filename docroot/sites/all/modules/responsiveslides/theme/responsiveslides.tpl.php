<?php

/**
 * @file
 * Default views template for responsiveslides.
 *
 * - $view: The View object.
 * - $options: Settings for the active style.
 * - $rows: The rows output from the View.
 * - $title: The title of this group of rows. May be empty.
 *
 * @ingroup views_templates
 */
?>

<?php if (!empty($rows)): ?>
  <?php $rs = $options['responsiveslides']; ?>
  <div class="rs-container <?php print $classes; ?>">
    <ul class="<?php print $ul_classes; ?>">
      <?php foreach ($rows as $id => $row): ?>
        <li class="rslide-<?php print $id; ?>"><?php print $row; ?></li>
      <?php endforeach; ?>
    </ul>
    <?php if (empty($rs['navContainer'])): ?>
      <div class="responsiveslides-controls rslide-control-<?php print $namespace; ?>"></div>
    <?php endif; ?>
  </div>
<?php endif; ?>
