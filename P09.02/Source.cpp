#include <iostream>
#define CIMGGIP_MAIN
#include "CImgGIP05.h"
using namespace std;
using namespace cimg_library;
int main()
{
	while (gip_window_not_closed())
	{

		gip_stop_updates();
		gip_load_image("Campus_Eupener_Strasse.bmp");
		for (int i = 0; i <= gip_win_size_x; i++)
		{
			for (int z = 0; z <= gip_win_size_y; z++) {
				if (gip_distance(i, z, gip_mouse_x(), gip_mouse_y()) > 100)
					gip_set_grey(i, z, 0);
				else
					gip_set_grey(i, z, gip_get_grey(i, z));
			}
		}
		gip_start_updates();

	
		gip_sleep(3);
	}
	return 0;
}