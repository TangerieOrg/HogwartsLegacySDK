#include "FDateTimeInput.hpp"
#include "FDayNightCSVReportOptions.hpp"
#include "UTimeSourceCSVDump.hpp"
#include "UTimeSourceLocal.hpp"
UTimeSourceCSVDump* UTimeSourceCSVDump::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.TimeSourceCSVDump");
    return (UTimeSourceCSVDump*)res;
}
