'''
Given n boxes [(L1, W1, H1), (L2, W2, H2), (L3, W3, H3).....(Ln, Wn, Hn)]
where box i has length Li, Width Wi, Height Hi, find the height of the tallest stack. Box (Li, Wi, Hi) can be on top of box (Lj, Wj, Hj) if Li < Lj, Wi < Wj
'''

def tallestStack(boxes):
    boxes.sort(key=lambda x: x[0]) # sorting boxes by their lengths
    heights = {box: box[2] for box in boxes} # dictionary storing their heights
    for i in range(1, len(boxes)):
        box = boxes[i]
        S = [boxes[j] for j in range(i) if canbeStacked(boxes[j], box)]
        heights[box] = box[2] + max([heights[box] for box in S], default = 0) 
    return max(heights.values(), default = 0)

def canbeStacked(top, bottom):
    return top[0] < bottom[0] and top[1] < bottom[1]

boxes = [(4,5,3), (2,3,2), (3, 6, 2), (1, 5, 4), (2, 4, 1), (1, 2, 2)] # 7 [(1,2,2), (2,3,2), (4,5,3)]
print(tallestStack(boxes))
