#include "ESimpleDataSetPreloadState.hpp"
#include "FSimpleDataSetPendingLoad.hpp"
#include "UObject.hpp"
#include "USimpleDataSet.hpp"
USimpleDataSet* USimpleDataSet::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.SimpleDataSet");
    return (USimpleDataSet*)res;
}
