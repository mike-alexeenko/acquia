<?php
// $Id$

/**
 * @file comment.tpl.php
 * Default theme implementation for comments.
 *
 * Available variables:
 * - $author: Comment author. Can be link or plain text.
 * - $content: Body of the post.
 * - $date: Date and time of posting.
 * - $links: Various operational links.
 * - $new: New comment marker.
 * - $picture: Authors picture.
 * - $signature: Authors signature.
 * - $status: Comment status. Possible values are:
 *   comment-unpublished, comment-published or comment-preview.
 * - $submitted: By line with date and time.
 * - $title: Linked title.
 *
 * These two variables are provided for context.
 * - $comment: Full comment object.
 * - $node: Node object the comments are attached to.
 *
 * @see template_preprocess_comment()
 * @see theme_comment()
 */
?>
 <div class="<?php print $classes ?>">
   <div>
   	 <?php if (isset($picture)): ?>
	 <?php print $picture ?>
     <?php endif; ?>
	 <div class="commentbody">
	<?php if(isset($author)): ?>   <cite><?php print $author ?> </cite><br /><?php endif; ?>
	 <?php if(isset($created)): ?>   <small class="commentmetadata"><?php print $created ?></small><?php endif; ?>
	   <?php if ($status == 'comment-unpublished') : ?>
         <p class="moderate"><?php print t('Your comment is awaiting moderation.'); ?></p>
       <?php endif; ?>
       <?php print render($content) ?>
	 </div>
	 
	 <?php if (isset($signature)): ?>
	   <div class="user-signature clear-block">
          <?php print $signature ?>
       </div>
     <?php endif; ?>
     
	 <div class="clear-block"></div>
   </div>
</div>

