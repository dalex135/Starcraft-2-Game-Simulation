#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include "Simulator.h"
#include "Reader.h"
#include "Writer.h"
#include "json.hpp"

using namespace std;

int main()
{
   Simulator s;
   s.techTree = s.reader.read_csv_file("unit_db.txt");
   s.run();
}
