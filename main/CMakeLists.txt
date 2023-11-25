idf_component_register(SRCS "main.c"
    INCLUDE_DIRS "." "../components/ble_rgb/" "../components/rgb/"
    PRIV_REQUIRES driver nvs_flash)
