#pragma once
#include <Arduino.h>
#include "FS.h"
#include "SD.h"
#include "SPI.h"

String systemInfoMessage();
String sdInfoMessage();
String predictionMessage(String className, float probability);