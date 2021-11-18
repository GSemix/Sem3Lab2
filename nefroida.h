#pragma once /* Защита от двойного подключения заголовочного файла */

class Nefroida {

    public:
        double get_r ();
        void set_r (double input_r);
        double curve_length ();
        double radius_of_curvature (double t);
        double curved_area ();
        double x_depending_on_t (double t);
        double y_depending_on_t (double t);
        char * nefroid();

    private:
        double r;
};
