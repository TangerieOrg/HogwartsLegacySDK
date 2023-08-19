#include "ULocDirectHttpService.hpp"
#include "UObject.hpp"
ULocDirectHttpService* ULocDirectHttpService::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaLocDirect.LocDirectHttpService");
    return (ULocDirectHttpService*)res;
}
