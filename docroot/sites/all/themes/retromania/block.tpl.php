<?php
// $Id$
?>
<div class="widget block-<?php print $block->module ?>" id="block-<?php print $block->module . '-' . $block->delta; ?>">
   <?php if (isset($block->subject)): ?><h2 class="widgettitle"><?php print $block->subject ?></h2><?php endif; ?>	
   <div class="block-content"><?php print $content ?></div>
</div>
