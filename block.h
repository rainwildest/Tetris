#ifndef BLOCK_H
#define BLOCK_H

/* 表示方块 */
class Block
{
public:
    Block();

    /**
     * @brief 下落
     */
    void drop();

    /**
     * @brief 左右移动
     * @param offset
     */
    void moveLeftRight(int offset);

    /**
     * @brief 旋转
     */
    void retate();

    /**
     * @brief 画方块
     * @param leftMargin
     * @param topMargin
     */
    void draw(int leftMargin, int topMargin);
};

#endif // BLOCK_H
