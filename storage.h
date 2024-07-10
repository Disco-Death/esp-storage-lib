#pragma once
#ifndef STORAGE_H
#define STORAGE_H

#include <Preferences.h>

namespace Storage {
  Preferences pref;

  // Размеры ключей и названий пространств имён не должны быть больше 15 символов
  bool saveBool(const char* key, bool value) {
    pref.begin(STORAGE_NAMESPACE, false);
    bool res = pref.putBool(key, value);
    pref.end();
    return res;
  }
  bool saveInt8(const char* key, int8_t value) {
    pref.begin(STORAGE_NAMESPACE, false);
    bool res = pref.putChar(key, value);
    pref.end();
    return res;
  }
  bool saveUInt8(const char* key, uint8_t value) {
    pref.begin(STORAGE_NAMESPACE, false);
    bool res = pref.putUChar(key, value);
    pref.end();
    return res;
  }
  bool saveInt16(const char* key, int16_t value) {
    pref.begin(STORAGE_NAMESPACE, false);
    bool res = pref.putInt(key, value);
    pref.end();
    return res;
  }
  bool saveUInt16(const char* key, uint16_t value) {
    pref.begin(STORAGE_NAMESPACE, false);
    bool res = pref.putUInt(key, value);
    pref.end();
    return res;
  }
  bool saveInt32(const char* key, int32_t value) {
    pref.begin(STORAGE_NAMESPACE, false);
    bool res = pref.putLong(key, value);
    pref.end();
    return res;
  }
  bool saveUInt32(const char* key, uint32_t value) {
    pref.begin(STORAGE_NAMESPACE, false);
    bool res = pref.putULong(key, value);
    pref.end();
    return res;
  }
  bool saveInt64(const char* key, int64_t value) {
    pref.begin(STORAGE_NAMESPACE, false);
    Serial.println("save: int64_t");
    bool res = pref.putLong64(key, value);
    pref.end();
    return res;
  }
  bool saveUInt64(const char* key, uint64_t value) {
    pref.begin(STORAGE_NAMESPACE, false);
    bool res = pref.putULong64(key, value);
    pref.end();
    return res;
  }
  bool saveFloat(const char* key, float_t value) {
    pref.begin(STORAGE_NAMESPACE, false);
    bool res = pref.putFloat(key, value);
    pref.end();
    return res;
  }
  bool saveDouble(const char* key, double_t value) {
    pref.begin(STORAGE_NAMESPACE, false);
    bool res = pref.putDouble(key, value);
    pref.end();
    return res;
  }
  bool saveChars(const char* key, const char* value) {
    pref.begin(STORAGE_NAMESPACE, false);
    bool res = pref.putString(key, value);
    pref.end();
    return res;
  }
  bool saveString(const char* key, String value) {
    pref.begin(STORAGE_NAMESPACE, false);
    bool res = pref.putString(key, value);
    pref.end();
    return res;
  }
  bool saveBytes(const char* key, const void* buf, size_t len) {
    pref.begin(STORAGE_NAMESPACE, false);
    bool res = pref.putBytes(key, buf, len);
    pref.end();
    return res;
  }
  
  bool loadBool(const char* key) {
    pref.begin(STORAGE_NAMESPACE, false);
    bool res = pref.getBool(key);
    pref.end();
    return res;
  }
  int8_t loadInt8(const char* key) {
    pref.begin(STORAGE_NAMESPACE, false);
    int8_t res = pref.getChar(key);
    pref.end();
    return res;
  }
  uint8_t loadUInt8(const char* key) {
    pref.begin(STORAGE_NAMESPACE, false);
    uint8_t res = pref.getUChar(key);
    pref.end();
    return res;
  }
  int16_t loadInt16(const char* key) {
    pref.begin(STORAGE_NAMESPACE, false);
    int16_t res = pref.getShort(key);
    pref.end();
    return res;
  }
  uint16_t loadUInt16(const char* key) {
    pref.begin(STORAGE_NAMESPACE, false);
    uint16_t res = pref.getUShort(key);
    pref.end();
    return res;
  }
  int32_t loadInt32(const char* key) {
    pref.begin(STORAGE_NAMESPACE, false);
    int32_t res = pref.getInt(key);
    pref.end();
    return res;
  }
  uint32_t loadUInt32(const char* key) {
    pref.begin(STORAGE_NAMESPACE, false);
    uint32_t res = pref.getUInt(key);
    pref.end();
    return res;
  }
  int64_t loadInt64(const char* key) {
    pref.begin(STORAGE_NAMESPACE, false);
    Serial.println("load: int64_t");
    int64_t res = pref.getLong64(key);
    pref.end();
    return res;
  }
  uint64_t loadUInt64(const char* key) {
    pref.begin(STORAGE_NAMESPACE, false);
    uint64_t res = pref.getULong64(key);
    pref.end();
    return res;
  }
  float_t loadFloat(const char* key) {
    pref.begin(STORAGE_NAMESPACE, false);
    float_t res = pref.getFloat(key);
    pref.end();
    return res;
  }
  double_t loadDouble(const char* key) {
    pref.begin(STORAGE_NAMESPACE, false);
    double_t res = pref.getDouble(key);
    pref.end();
    return res;
  }
  const char* loadChars(const char* key, size_t len) {
    pref.begin(STORAGE_NAMESPACE, false);
    char* res = {0};
    pref.getString(key, res, len);
    pref.end();
    return res;
  }
  String loadString(const char* key) {
    pref.begin(STORAGE_NAMESPACE, false);
    String res = pref.getString(key);
    pref.end();
    return res;
  }
  size_t loadBytes(const char* key, void* buf, size_t len) {
    pref.begin(STORAGE_NAMESPACE, false);
    size_t res = pref.getBytes(key, buf, len);
    pref.end();
    return res;
  }
  
  bool remove(const char* key) {
    pref.begin(STORAGE_NAMESPACE, false);
    bool res = pref.remove(key);
    pref.end();
    return res;
  }
  bool clear() {
    pref.begin(STORAGE_NAMESPACE, false);
    bool res = pref.clear();
    pref.end();
    return res;
  }
}

#endif
