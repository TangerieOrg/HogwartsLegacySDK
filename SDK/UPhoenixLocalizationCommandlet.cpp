#include "UCommandlet.hpp"
#include "UPhoenixLocalizationCommandlet.hpp"
UPhoenixLocalizationCommandlet* UPhoenixLocalizationCommandlet::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhoenixLocalizationCommandlet");
    return (UPhoenixLocalizationCommandlet*)res;
}
