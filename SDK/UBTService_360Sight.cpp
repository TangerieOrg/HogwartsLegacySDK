#include "UBTService.hpp"
#include "UBTService_360Sight.hpp"
UBTService_360Sight* UBTService_360Sight::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTService_360Sight");
    return (UBTService_360Sight*)res;
}
