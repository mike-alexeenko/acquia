<?php
// $Id$

function retromania_preprocess_page(&$variables) {
  $variables['footer_msg'] = ' &copy; ' . $variables['site_name'] . ' ' . date('Y');
 
  $variables['p_links'] = '';
  if(!empty($variables['main_menu'])) {

    foreach ($variables['main_menu'] as $link) {
      $link_current = '';
      $attributes = 'class="page_item"';

      $href_attributes = 'class="fadeThis"';
      $href = url($link['href']);

      if ($link['href'] == '<front>') {
        $attributes = 'id="nav-homelink"';

        if (drupal_is_front_page())
        $attributes .= ' class="current_page_item"';

        $href_attributes = 'class="fadeThis"';

      }

      if($link['href'] == $_GET['q']) {
        $attributes = 'class="current_page_item fadeThis"';
      }
      $variables['p_links'] .= '<li ' . $attributes . '><a ' . $href_attributes . ' href="' . $href . '" ><span>' . $link['title'] . '</span></a></li>';
    }
  }
  $variables['footer_tp'] = '';
  if ($_SERVER['REQUEST_URI'] == '/')
  $variables['footer_tp'] = ' <a href="http://www.discountforhosting.com/">Discount for hosting</a> ';
}

function retromania_preprocess_node(&$variables) {
  $variables['post_day'] = format_date($variables['node']->created, 'custom', 'd');
  $variables['post_month'] = format_date($variables['node']->created, 'custom', 'M');
  $variables['posted_by'] = t('By !username', array('!username' => $variables['name']));
}

function retromania_preprocess_comment_wrapper(&$variables) {
  $node = $variables['node'];
  $variables['header'] = t('<strong>!count comments</strong> on %title', array('!count' => $node->comment_count, '%title' => $node->title));
}

function retromania_preprocess_comment(&$variables) {
  $variables['classes'] = array('comment');
  if ($variables['zebra'] == 'even') {
    $variables['classes'][] = 'alt';
  }
  $variables['classes'] = implode(' ', $variables['classes']);
}

