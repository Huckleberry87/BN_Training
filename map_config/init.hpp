class map_config {
	starting_zones[] = {"zone_pyrgos"};
	max_camps_per_zone = 4;
	max_aa_per_zone = 4;
	max_artillery_per_zone = 3;
	max_fortifications_per_zone = 1;	
	max_radars_per_zone = 0;
	max_water_supply_per_zone = 2;
	max_tunnels_per_zone = 1;
	max_vehicle_depots_per_zone = 3;
	max_navy_per_zone = 2;
	bn_zone_radius = 800;
	class zones {
		#include "zones.hpp"
	};
};
