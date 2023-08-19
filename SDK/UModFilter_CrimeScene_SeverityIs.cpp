#include "EValueComparison.hpp"
#include "UModFilter_CrimeScene_Base.hpp"
#include "UModFilter_CrimeScene_SeverityIs.hpp"
UModFilter_CrimeScene_SeverityIs* UModFilter_CrimeScene_SeverityIs::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_CrimeScene_SeverityIs");
    return (UModFilter_CrimeScene_SeverityIs*)res;
}
