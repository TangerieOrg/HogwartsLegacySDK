#include "AActor.hpp"
#include "ATileSpawnPointCollector.hpp"
#include "FCustomButtonWidget.hpp"
ATileSpawnPointCollector* ATileSpawnPointCollector::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TileSpawnPointCollector");
    return (ATileSpawnPointCollector*)res;
}
