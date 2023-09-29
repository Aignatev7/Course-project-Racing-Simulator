#include "transport_factory.h"

Transport** makeTransports(size_t& total_transports)
{
	total_transports = 2;
	Transport** trans_arr = new Transport * [total_transports];
	trans_arr[0] = new Camel();
	trans_arr[1] = new CamelFast();
	trans_arr[2] = new Centaur();
	trans_arr[3] = new AllTerrainBoots();
	trans_arr[4] = new MagicCarpet();
	trans_arr[5] = new Eagle();
	trans_arr[6] = new Broomstick();
	return trans_arr;
}