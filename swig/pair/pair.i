// pair.i - SWIG interface
 %module pair
 %{
 #include "pair.h"
 %}
 
 // Ignore the default constructor
 %ignore mystd::pair::pair();      
 
 // Parse the original header file
 %include "pair.h"
 
 // Instantiate some templates
 
 %template(pairii) mystd::pair<int,int>;
 %template(pairdi) mystd::pair<double,int>;
