<?php
/**
 * @file
 * main_page_content_slider.flexslider_default_preset.inc
 */

/**
 * Implements hook_flexslider_default_presets().
 */
function main_page_content_slider_flexslider_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'clone_of_default';
  $preset->title = 'Hero Main';
  $preset->theme = 'classic';
  $preset->imagestyle_normal = 'flexslider_full';
  $preset->imagestyle_thumbnail = 'flexslider_thumbnail';
  $preset->options = array(
    'namespace' => 'flex-',
    'selector' => '.slides > li',
    'easing' => 'linear',
    'direction' => 'horizontal',
    'reverse' => 0,
    'smoothHeight' => 0,
    'startAt' => '0',
    'animationSpeed' => '500',
    'initDelay' => '0',
    'useCSS' => 1,
    'touch' => 0,
    'video' => 0,
    'keyboard' => 0,
    'multipleKeyboard' => 0,
    'mousewheel' => 0,
    'controlsContainer' => '.flex-control-nav-container',
    'sync' => '',
    'asNavFor' => '',
    'itemWidth' => '0',
    'itemMargin' => '0',
    'minItems' => '0',
    'maxItems' => '0',
    'move' => '0',
    'animation' => 'fade',
    'slideshow' => 0,
    'slideshowSpeed' => '7000',
    'directionNav' => 0,
    'controlNav' => '1',
    'prevText' => '',
    'nextText' => '',
    'pausePlay' => 0,
    'pauseText' => 'Pause',
    'playText' => 'Play',
    'randomize' => 0,
    'thumbCaptions' => 0,
    'thumbCaptionsBoth' => 0,
    'animationLoop' => 0,
    'pauseOnAction' => 0,
    'pauseOnHover' => 0,
    'manualControls' => '#flexslider-2 li',
  );
  $export['clone_of_default'] = $preset;

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'hero_thumb';
  $preset->title = 'Hero Thumb';
  $preset->theme = 'classic';
  $preset->imagestyle_normal = 'flexslider_thumbnail';
  $preset->imagestyle_thumbnail = '';
  $preset->options = array(
    'namespace' => 'flex-',
    'selector' => '.slides > li',
    'easing' => 'linear',
    'direction' => 'horizontal',
    'reverse' => 0,
    'smoothHeight' => 0,
    'startAt' => '0',
    'animationSpeed' => '500',
    'initDelay' => '0',
    'useCSS' => 1,
    'touch' => 0,
    'video' => 0,
    'keyboard' => 0,
    'multipleKeyboard' => 0,
    'mousewheel' => 0,
    'controlsContainer' => '.flex-control-nav-container',
    'sync' => '#flexslider-1',
    'asNavFor' => '',
    'itemWidth' => '',
    'itemMargin' => '0',
    'minItems' => '3',
    'maxItems' => '3',
    'move' => '0',
    'animation' => 'fade',
    'slideshow' => 0,
    'slideshowSpeed' => '7000',
    'directionNav' => 0,
    'controlNav' => '0',
    'prevText' => 'Previous',
    'nextText' => 'Next',
    'pausePlay' => 0,
    'pauseText' => 'Pause',
    'playText' => 'Play',
    'randomize' => 0,
    'thumbCaptions' => 0,
    'thumbCaptionsBoth' => 0,
    'animationLoop' => 0,
    'pauseOnAction' => 0,
    'pauseOnHover' => 0,
    'manualControls' => '',
  );
  $export['hero_thumb'] = $preset;

  return $export;
}
