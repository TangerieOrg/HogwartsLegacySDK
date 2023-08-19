#include "UObject.hpp"
#include "URecordMovieWin64.hpp"
URecordMovieWin64* URecordMovieWin64::StaticClass() {
    static auto res = find_uobject("Class /Script/RecordMovieWin64.RecordMovieWin64");
    return (URecordMovieWin64*)res;
}
