#include "UModFilter_CrimeScene_Base.hpp"
#include "UModFilter_CrimeScene_CrimeIsType.hpp"
UModFilter_CrimeScene_CrimeIsType* UModFilter_CrimeScene_CrimeIsType::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_CrimeScene_CrimeIsType");
    return (UModFilter_CrimeScene_CrimeIsType*)res;
}
