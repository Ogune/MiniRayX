#include "../includes/minirt.h"

t_inter	find_inter(t_CamRay *ray, t_scene *sc)
{
	t_inter	hold;
	t_objs	*obj;

	hold.t = -1.0;
	obj = sc->objs;
	while (obj)
	{
		if (obj->type == SP)
			hold = spher_normal(hold, obj, ray);
		if (obj->type == PL)
			hold = plane_normal(hold, obj, ray);
		if (obj->type == CY)
			hold = cylinder_normal(hold, obj, ray);
		obj = obj->next;
	}
	return (hold);
}
