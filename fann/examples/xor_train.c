/*
Fast Artificial Neural Network Library (fann)
Copyright (C) 2003-2012 Steffen Nissen (sn@leenissen.dk)

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/


// This code is for 3 axis accelerometer datasets. Training + Execution

#include <stdio.h>

#include "fann.h"


int main()
{
	fann_type *calc_out;
  const float connection_rate = 1;
  const float learning_rate = 0.7;
	const unsigned int num_input = 3;
	const unsigned int num_output = 1;

	const unsigned int num_layers = 3;
	const unsigned int num_neurons_hidden = 3;
	const float desired_error = 0.0001;
	const unsigned int max_epochs = 500000;
	const unsigned int epochs_between_reports = 1000;
	struct fann *ann;
	struct fann_train_data *train_data, *test_data;

	unsigned int i = 0;

	//unsigned int decimal_point;

	printf("Creating network.\n");

	ann = fann_create_standard(num_layers, num_input, num_neurons_hidden, num_output);

	train_data = fann_read_train_from_file("../datasets/test/Case1.train");
  
	//fann_set_activation_steepness_hidden(ann, 1);
	//fann_set_activation_steepness_output(ann, 1);
  
	printf("Training network.\n");

	fann_set_activation_function_hidden(ann, FANN_SIGMOID_SYMMETRIC);
	fann_set_activation_function_output(ann, FANN_SIGMOID_SYMMETRIC);

	//fann_set_train_stop_function(ann, FANN_STOPFUNC_BIT);
	//fann_set_bit_fail_limit(ann, 0.01f);

	fann_set_training_algorithm(ann, FANN_TRAIN_RPROP);

	//fann_init_weights(ann, data);
	
    
	fann_train_on_data(ann, train_data, max_epochs, epochs_between_reports, desired_error);

	//printf("Testing network. %f\n", fann_test_data(ann, data));
  printf("Testing network.\n");
  
  test_data = fann_read_train_from_file("../datasets/test/Case1.test");

  fann_reset_MSE(ann);
	for(i = 0; i < fann_length_train_data(test_data); i++)
	{
		calc_out = fann_test(ann, test_data->input[i], test_data->output[i]);

		printf("TEST(%.1f,%.1f,%.1f) -> %.3f, should be %.3f, difference=%.3f\n",
			   test_data->input[i][0], test_data->input[i][1], test_data->input[i][2], calc_out[0], test_data->output[i][0],
         (float) fann_abs(calc_out[0] - test_data->output[i][0]));
	}

  printf("MSE error on test data: %f\n", fann_get_MSE(ann));
	printf("Saving network.\n");

	fann_save(ann, "fst_test_float.net");

	//decimal_point = fann_save_to_fixed(ann, "xor_fixed.net");
	//fann_save_train_to_fixed(data, "xor_fixed.data", decimal_point);

	printf("Cleaning up.\n");
  //fann_destory_train(train_data);
	fann_destroy_train(test_data);
	fann_destroy(ann);

	return 0;
}
