<?php
// $Id$

/**
 * @file node.tpl.php
 *
 * Theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: Node body or teaser depending on $teaser flag.
 * - $picture: The authors picture of the node output from
 *   theme_user_picture().
 * - $date: Formatted creation date (use $created to reformat with
 *   format_date()).
 * - $links: Themed links like "Read more", "Add new comment", etc. output
 *   from theme_links().
 * - $name: Themed username of node author output from theme_user().
 * - $node_url: Direct url of the current node.
 * - $terms: the themed list of taxonomy term links output from theme_links().
 * - $submitted: themed submission information output from
 *   theme_node_submitted().
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type, i.e. story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $teaser: Flag for the teaser state.
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 */
?>
<div class="post" id="node-<?php print $node->nid; ?>">
  <div class="post_date">
<?php if (isset($post_day)): ?>
    <div class="post_date_top"><?php print $post_day; ?></div>
    <div class="post_date_bottom"><?php print $post_month; ?></div>           
<?php endif; ?>                                 
  </div>
  <?php if (isset($title)): ?><h2 class="post_header"><a href="<?php print $node_url ?>" rel="bookmark"><?php print $title ?></a></h2><?php endif; ?>
  <div class="post_line"></div>
  <div class="post_content">
	     <?php
	     // We hide the comments and links now so that we can render them later.
	      hide($content['comments']);
	      hide($content['links']);
		  hide($content['readmore']);
		  hide($content['field_tags']);
	      print render($content);
	      ?>
  </div>
  <div class="clearfix"></div>
  <div class="post_data">
   <?php if(isset($posted_by)): ?> <div class="author"><?php print $posted_by ?></div> <?php endif; ?>  
   <?php if(isset($content['field_tags'])): ?><?php print render($content['field_tags']); ?><?php endif; ?>  
  <?php if(isset($content['links'])): ?><?php print render($content['links']);endif; ?>                                      
  </div> 
	<?php print render($content['comments']); ?>   
</div>
