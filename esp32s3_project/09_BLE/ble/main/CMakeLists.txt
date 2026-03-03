idf_component_register(SRCS "ble.c"
                            "../driver/src/esp32_s3_szp.c"
                            "../driver/src/ble_hidd_demo.c"
                            "../driver/src/esp_hidd_prf_api.c"
                            "../driver/src/hid_dev.c"
                            "../driver/src/hid_device_le_prf.c"
                    INCLUDE_DIRS ".""../driver/inc")

target_compile_options(${COMPONENT_LIB} PRIVATE -Wno-unused-const-variable)