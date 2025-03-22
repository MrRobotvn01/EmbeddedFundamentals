#ifndef BIT_UTILS_H
#define BIT_UTILS_H

#include <stdio.h>
#include <time.h>

/**
 * @brief Thiết lập bit tại vị trí pos trong số num.
 *
 * @param num Số cần thao tác.
 * @param pos Vị trí của bit cần thiết lập (0 là bit thấp nhất).
 *
 * @return Số sau khi bit tại vị trí pos được thiết lập.
 */
#define SET_BIT(num, pos) ((num) |= (1U << (pos)))

/**
 * @brief Xóa bit tại vị trí pos trong số num.
 *
 * @param num Số cần thao tác.
 * @param pos Vị trí của bit cần xóa (0 là bit thấp nhất).
 *
 * @return Số sau khi bit tại vị trí pos được xóa.
 */
#define CLEAR_BIT(num, pos) ((num) &= ~(1U << (pos)))

/**
 * @brief Đảo bit tại vị trí pos trong số num.
 *
 * @param num Số cần thao tác.
 * @param pos Vị trí của bit cần đảo (0 là bit thấp nhất).
 *
 * @return Số sau khi bit tại vị trí pos được đảo.
 */
#define TOGGLE_BIT(num, pos) ((num) ^= (1U << (pos)))

/**
 * @brief Kiểm tra giá trị của bit tại vị trí pos trong số num.
 *
 * @param num Số cần kiểm tra.
 * @param pos Vị trí của bit cần kiểm tra (0 là bit thấp nhất).
 *
 * @return Trả về 1 nếu bit tại vị trí pos là 1, ngược lại trả về 0.
 */
#define CHECK_BIT(num, pos) (((num) & (1U << (pos))) ? 1 : 0)

#endif // BIT_UTILS_H
