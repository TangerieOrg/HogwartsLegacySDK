#include "UModFilter.hpp"
#include "UModFilter_CrimeScene_Base.hpp"
UModFilter_CrimeScene_Base* UModFilter_CrimeScene_Base::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_CrimeScene_Base");
    return (UModFilter_CrimeScene_Base*)res;
}
