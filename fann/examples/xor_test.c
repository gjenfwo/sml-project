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

#include <stdio.h>

#include "fann.h"


int main()
{
	fann_type *calc_out;
	unsigned int i;
	struct fann *ann;
	struct fann_train_data *data;

	printf("Creating network.\n");

  ann = fann_create_from_file("xor_float.net");
	
  fann_print_connections(ann);
	fann_print_parameters(ann);

	printf("Testing network.\n");

  data = fann_read_train_from_file("xor.data");

	for(i = 0; i < fann_length_train_data(data); i++)	{

		fann_reset_MSE(ann);
		calc_out = fann_run(ann, data->input[i]);
    
    printf("XOR test (%.2f, %.2f, %.2f) -> %.2f, should be %.2f, difference=%f\n",
			   data->input[i][0], data->input[i][1], data->input[i][2], calc_out[0],
         data->output[i][0], (float) fann_abs(calc_out[0] - data->output[i][0]));
	}

	printf("Cleaning up.\n");
	fann_destroy_train(data);
	fann_destroy(ann);

	return 0;
}
