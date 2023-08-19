#include "FMultiplePoiTest.hpp"
#include "UMultiplePoiTestsManager.hpp"
#include "UObject.hpp"
UMultiplePoiTestsManager* UMultiplePoiTestsManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiplePoiTestsManager");
    return (UMultiplePoiTestsManager*)res;
}
