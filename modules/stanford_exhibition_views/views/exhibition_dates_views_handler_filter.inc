<?php
/*
 * @file
 * Aggregated min date handler for exhibitions.
 *
 * ******************** THIS DOES NOT WORK ****************
 *
 */

class exhibition_dates_views_handler_filter extends views_handler_filter_date {

    /**
     * Overrides views_handler_filter_date::operators().
     */
    function operators() {
      $operators = parent::operators();
      $operators['max_greater_or_equal']['title'] = t('maximum value greater than or equal to');
      $operators['max_greater_or_equal']['method'] = 'op_max_greater_or_equal';
      $operators['max_greater_or_equal']['short'] = 'magoe';
      $operators['max_greater_or_equal']['values'] = 0;

      $operators['max_less_or_equal']['title'] = t('maximum value less than or equal to');
      $operators['max_less_or_equal']['method'] = 'op_max_less_or_equal';
      $operators['max_less_or_equal']['short'] = 'maloe';
      $operators['max_less_or_equal']['values'] = 0;

      $operators['min_less_or_equal']['title'] = t('minimum value less than or equal to');
      $operators['min_less_or_equal']['method'] = 'op_min_less_or_equal';
      $operators['min_less_or_equal']['short'] = 'miloe';
      $operators['min_less_or_equal']['values'] = 0;

      $operators['min_greater_or_equal']['title'] = t('minimum value greater than or equal to');
      $operators['min_greater_or_equal']['method'] = 'op_min_greater_or_equal';
      $operators['min_greater_or_equal']['short'] = 'migoe';
      $operators['min_greater_or_equal']['values'] = 0;

      return $operators;
    }


    /**
     * Overrides views_handler_filter_date::value_form().
     */
    function value_form(&$form, &$form_state) {
        // Adjust the parent option descriptions.
        parent::value_form($form, $form_state);
        $form['value']['type']['#options']['today'] = t('Today.');
    }

    /**
     * [op_min_less_or_equal description]
     * @param  [type] $field [description]
     * @return [type]        [description]
     */
    function op_max_less_or_equal($field) {
        // $this->query->add_field(null, $field, 'maloedate', array('function' => 'max'));
        // $this->query->add_groupby('node.nid');

        // if ($this->value['type'] == 'today') {
        //   $this->query->add_where_expression($this->options['group'] , "$field <= ( " . strtotime('today') . " )");
        // }
        // else if ($this->value['type'] == 'date') {
        //   $this->query->add_where_expression($this->options['group'] , "$field <= ( " . strtotime($this->value['value']) . " )");
        // }
        // else if ($this->value['type'] == 'offset') {
        //   $this->query->add_where_expression($this->options['group'] , "$field <= ( " . strtotime($this->value['min']) . " )");
        //   $this->query->add_where_expression($this->options['group'] , "$field >= ( " . strtotime($this->value['max']) . " )");
        // }
    }


    /**
     * [op_min_less_or_equal description]
     * @param  [type] $field [description]
     * @return [type]        [description]
     */
    function op_max_greater_or_equal($field) {
        // $this->query->add_field(null, $field, 'magoedate', array('function' => 'max'));
        // $this->query->add_groupby('node.nid');

        // if ($this->value['type'] == 'today') {
        //   $this->query->add_where_expression($this->options['group'] , "$field >= ( " . strtotime('today') . " )");
        // }
        // else if ($this->value['type'] == 'date') {
        //   $this->query->add_where_expression($this->options['group'] , "$field >= ( " . strtotime($this->value['value']) . " )");
        // }
        // else if ($this->value['type'] == 'offset') {
        //   $this->query->add_where_expression($this->options['group'] , "$field >= ( " . strtotime($this->value['min']) . " )");
        //   $this->query->add_where_expression($this->options['group'] , "$field >= ( " . strtotime($this->value['max']) . " )");
        // }
    }

    /**
     * [op_min_less_or_equal description]
     * @param  [type] $field [description]
     * @return [type]        [description]
     */
    function op_min_less_or_equal($field) {
        // $this->query->add_field(null, $field, 'miloedate', array('function' => 'min'));
        // $this->query->add_groupby('node.nid');

        // if ($this->value['type'] == 'today') {
        //   $this->query->add_where_expression($this->options['group'] , "miloedate <= ( " . strtotime('today') . " )");
        // }
        // else if ($this->value['type'] == 'date') {
        //   $this->query->add_where_expression($this->options['group'] , "miloedate <= ( " . strtotime($this->value['value']) . " )");
        // }
        // else if ($this->value['type'] == 'offset') {
        //   $this->query->add_where_expression($this->options['group'] , "miloedate <= ( " . strtotime($this->value['min']) . " )");
        //   $this->query->add_where_expression($this->options['group'] , "miloedate >= ( " . strtotime($this->value['max']) . " )");
        // }
    }


    /**
     * [op_min_less_or_equal description]
     * @param  [type] $field [description]
     * @return [type]        [description]
     */
    function op_min_greater_or_equal($field) {
      $this->query->add_field($this->table_alias, $this->real_field, 'migoedate', array('function' => 'min'));
      $this->query->add_groupby('node.nid');
      $this->query->add_orderby($this->table_alias, $this->real_field, 'ASC');
      $this->query->add_where_expression($this->options['group'] , "migoedate >= ( " . "0" . " )");

      // $this->query->add_groupby('node.nid');

      //   if ($this->value['type'] == 'today') {

      //       //$query = db_query("SELECT entity_id FROM {" . $this->table_alias . "} WHERE $field >= " . strtotime('today'));
      //       $query = db_select($this->table_alias, 'myfield')
      //           ->fields('myfield', array('entity_id'))
      //           ->condition($this->real_field, strtotime('today'), '>=')
      //           ->groupBy('entity_id');
      //       $query->addExpression('MIN(' . $this->real_field. ')');
      //       $nids = $query->execute();
      //       foreach ($nids as $nid) {
      //           $nid_string[$nid->entity_id] = $nid->entity_id;
      //       }
      //       $nid_string = implode(',', $nid_string);

      //       $this->query->add_where_expression($this->options['group'] , "entity_id IN ($nid_string)");
      //   }
      //   else if ($this->value['type'] == 'date') {
      //       $this->query->add_where_expression($this->options['group'] , "$field >= ( " . strtotime($this->value['value']) . " )");
      //   }
      //   else if ($this->value['type'] == 'offset') {
      //       $this->query->add_where_expression($this->options['group'] , "$field <= ( " . strtotime($this->value['min']) . " )");
      //       $this->query->add_where_expression($this->options['group'] , "$field >= ( " . strtotime($this->value['max']) . " )");
      //   }
    }



}
