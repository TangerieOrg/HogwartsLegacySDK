#include "FAIDataProviderFloatValue.hpp"
#include "FOdcFlags.hpp"
#include "UBTDecorator.hpp"
#include "UBTDecorator_CreatureCheckNavmeshAreaFlag.hpp"
UBTDecorator_CreatureCheckNavmeshAreaFlag* UBTDecorator_CreatureCheckNavmeshAreaFlag::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTDecorator_CreatureCheckNavmeshAreaFlag");
    return (UBTDecorator_CreatureCheckNavmeshAreaFlag*)res;
}
