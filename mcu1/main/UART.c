
#include "../Lib/UART.h"


static const int UART_TX_BUF_SIZE = 1048;
static const char *TAG = "UART";



esp_err_t UART_init()
{
    ESP_LOGI(TAG, "UART...\n");
    esp_err_t esp_err;
    
    const uart_config_t uart_config_UART = {
        .baud_rate = 9600,
        .data_bits = UART_DATA_8_BITS,
        .parity = UART_PARITY_DISABLE,
        .stop_bits = UART_STOP_BITS_1,
        .flow_ctrl = UART_HW_FLOWCTRL_DISABLE,
        .source_clk = UART_SCLK_APB,
    };
    esp_err = uart_param_config(UART_UART, &uart_config_UART);
    ESP_LOGI(TAG, "uart_param_config: %d\n", esp_err);
    esp_err = uart_driver_install(UART_UART, UART_TX_BUF_SIZE * 2, 0, 0, NULL, 0);
    ESP_LOGI(TAG, "uart_driver_install: %d\n", esp_err);
    esp_err = uart_set_pin(UART_UART, UART_UART_TXD, UART_UART_RXD, UART_PIN_NO_CHANGE, UART_PIN_NO_CHANGE);
    ESP_LOGI(TAG, "uart_set_pin: %d\n", esp_err);
    ESP_LOGI(TAG, "UART init success!\n");
    return esp_err;
}