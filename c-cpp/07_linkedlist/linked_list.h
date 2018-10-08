/**
 * 0) 遍历单链表
 * 1) 单链表反转
 * 2) 链表中环的检测
 * 3) 两个有序的链表合并
 * 4) 删除链表倒数第n个结点
 * 5) 求链表的中间结点
 *
 * Author: Liam Huang (Liam0205)
 */

#ifndef LINKEDLIST_LINKED_LIST_H_
#define LINKEDLIST_LINKED_LIST_H_

#include <memory>

template <typename T>
struct Node {
    using ptr_t = std::shared_ptr<Node<T>>;
    T     data;
    ptr_t next;

    Node(T data_) : data(data_), next(nullptr) {}
    Node() : next(nullptr) {}
};

#endif
