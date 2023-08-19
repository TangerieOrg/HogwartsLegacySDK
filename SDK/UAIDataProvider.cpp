#include "UAIDataProvider.hpp"
#include "UObject.hpp"
UAIDataProvider* UAIDataProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AIDataProvider");
    return (UAIDataProvider*)res;
}
