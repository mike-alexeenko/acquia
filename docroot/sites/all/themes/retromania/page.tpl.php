  <div class="wrap">
    <div class="header">
      <h1 class="logo"><a href="<?php print $front_page; ?>"><?php print $site_name; ?></a></h1>
      <?php if (isset($site_slogan)): ?><div class="description1"><?php print $site_slogan; ?></div><?php endif; ?>
      <?php print $feed_icons; ?>
      <ul id="nav" class="menu1"><?php if (isset($p_links)): ?><?php print $p_links; ?><?php endif; ?></ul>
    </div>
    <div class="content">
      <div class="content_left">
        <div class="content_right"><!-- Mainbar -->
          <div class="mainbar">
            <div class="mainbar_top">
              <div class="mainbar_bottom">
                <div class="mainbar_inner">

                  
<?php print render($page['highlighted']); ?>
       			  <?php if (!empty($breadcrumb)): ?><div class="drupal-breadcrumb"><?php print $breadcrumb; ?></div><?php endif; ?>

<?php if (!empty($messages)): ?><div style="margin:10px;"><?php print $messages; ?></div><?php endif; ?>
      			  <?php print render($title_prefix); ?>
      			  <?php if (!empty($title) && !$page): ?>
      				<h3 class="title" id="page-title">
      				  <?php print $title; ?>
      				</h3>
      			  <?php endif; ?>
      			  <?php print render($title_suffix); ?>
      			  <?php if (isset($tabs)): ?>
      				<div class="tabs">
      				  <?php print render($tabs); ?>
      				</div>
      			  <?php endif; ?>
      			  <?php print render($page['help']); ?>
      			  <?php if (isset($action_links)): ?>
      				<ul class="action-links">
      				  <?php print render($action_links); ?>
      				</ul>
      			  <?php endif; ?>
             <?php if ($is_front && !empty($mission)): ?>
                     <div >
                       <p><strong><?php print $mission; ?></strong></p>
                     </div>
                  <?php endif; ?>

       			<?php print render($page['content']); ?>


                </div>
              </div>
            </div>
          </div>  
  <!-- Sidebar -->  
 
        <div class="sidebar">
	        <?php if (isset($page['search_box'])): ?>
              <div>
                <?php print render($page['search_box']) ?>
                            
              </div>
    	    <?php endif; ?>
    	    
    	    <?php print render($page['right']) ?>
        </div>  
        <div class="clear"></div>
      </div>
    </div>
			<div class="footer">
            	<div class="footer_left">
            	<div class="footer_right">
                	<div class="copy"><?php if (isset($footer_msg)): ?><?php print $footer_msg; ?><?php endif; ?></div>
                    <div class="copy_support">Theme created by <a href="http://www.jayhafling.com/">Jay Hafling</a> and top <a href="http://topdrupalthemes.net/">drupal themes</a> | <?php print $footer_tp; ?>.</div>
            	</div>
            	</div>
            </div>
        </div>
    </div>
