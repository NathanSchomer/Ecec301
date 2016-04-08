world = [[0,0,0,0,0],[0,0,0,0,0],[0,0,0,0,0],[0,0,0,0,0],[0,0,0,0,0]]

sprite = [[1,0,0,0,0],[0,1,0,0,0],[0,0,1,0,0],[0,0,0,1,0],[0,0,0,0,1]]

#blit sprite here
x = y = 0

print 'world (orig)'
for row in world:
    print row

for row_idx,sprite_row in enumerate(sprite):
    for col_idx,sprite_col in enumerate(sprite_row):
        world[row_idx][col_idx] = sprite_col

print '\nsprite:'
for row in sprite:
    print row

print '\nworld:'
for row in world:
    print row
