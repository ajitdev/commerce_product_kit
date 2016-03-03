<?php
/**
 * @file
 * Contains admininistration form for the module.
 */

/**
 * Admin configuration form for commerce product kit.
 */
function commerce_product_kit_admin_form($form, &$form_state) {
  $form = array();
  $form['commerce_product_kit_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Enter label for the product kit'),
    '#description' => t('What do you call a product kit? E.g. "Set", "Wardrobe", etc.'),
    '#default_value' => variable_get('commerce_product_kit_label', 'product kit'),
  );
  return system_settings_form($form);
}
