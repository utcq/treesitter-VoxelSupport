module.exports = grammar({
  name: 'Voxel',


  rules: {
	source_file: $ => repeat($._definition),

    	_definition: $ => choice(
      		$.function_definition
    	),

	identifier: $ => /[a-z]+/,
    	number: $ => /\d+/,


	
	function_definition: $ => seq(
      		'function',
		'class',
		'namespace',
      		$.identifier,
      		$.parameter_list,
      		$._type,
      		$.block,
		field('name', $.identifier),
  		field('parameters', $.parameter_list),
  		field('return_type', $._type),
  		field('body', $.block)
    	),

	parameter_list: $ => seq(
      		'(',
      		')'
    	),

	conditional_expression: $ => seq(
		'if',
		'else if',
		'else',
		'or',
		'and',
		'not',
		'is'
	),
	
	_type: $ => choice(
      		'bool',
		'int',
		'str',
		'float',
		'double',
		'complex',
		'tuple',
		'dict',
		'set',
		'bytes',
		'bytearray',
		'NoneType',
		'null',
    	),
	block: $ => seq(
      		'{',
      		repeat($._statement),
      		'}'
    	),
	_statement: $ => choice(
      		$.return_statement
    	),
	return_statement: $ => seq(
      		'return',
      		$._expression,
      		';'
    	),
	_expression: $ => choice(
      		$.identifier,
      		$.number,
		$.unary_expression,
    		$.binary_expression,
		$.conditional_expression
    	),
	
	unary_expression: $ => prec(2, choice(
    		prec.left(2, seq('-', $._expression)),
    		prec.left(1, seq('!', $._expression)),
  	)),
  	binary_expression: $ => choice(
		prec.left(2, seq($._expression, '*', $._expression)),
    		prec.left(1, seq($._expression, '+', $._expression)),
	),
	
	array_type: $ => seq(
    		'[',
    		']',
    		$._type
  	),
	pointer_type: $ => seq(
    		'*',
		'&',
    		$._type
  	)

  }
});
