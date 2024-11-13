#include "../../lv_examples.h"
#if LV_USE_GIF && LV_BUILD_EXAMPLES

/**
 * Open a GIF image from a file and a variable
 */


lv_obj_t* gif_1(void) {
    LV_IMG_DECLARE(SS); // 确保这里引用的是有效的 GIF 图像数据
    lv_obj_t* img = lv_gif_create(lv_scr_act());

    // 设置 GIF 源
    lv_gif_set_src(img, &SS);
    lv_img_set_zoom(img, 512);  // 设置缩放比例，256 表示 100%，512 表示 200%
    lv_obj_align(img, LV_ALIGN_CENTER, 0, 0); // 居中对齐

    // 确保对象可以接收点击事件
    lv_obj_add_flag(img, LV_OBJ_FLAG_CLICKABLE);

    // 设置背景颜色为白色
    lv_obj_set_style_bg_color(img, lv_color_white(), 0); // 设置背景为白色
    lv_obj_set_style_bg_opa(img, LV_OPA_COVER, 0);       // 设置背景不透明度

    return img;
}



#endif
    // img = lv_gif_create(lv_scr_act());
    // /* Assuming a File system is attached to letter 'A'
    //  * E.g. set LV_USE_FS_STDIO 'A' in lv_conf.h */
    // lv_gif_set_src(img, "A:lvgl/examples/libs/gif/SS.gif");
    // lv_obj_align(img, LV_ALIGN_RIGHT_MID, -20, 0);
    //    lv_obj_align(img, LV_ALIGN_LEFT_MID, 200, 0);
    //    lv_img_set_zoom(img, 512);  // 设置缩放比例，256 表示 100%，512 表示 200%